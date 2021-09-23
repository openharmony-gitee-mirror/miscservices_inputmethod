/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FM_IMC_PROJECT_INPUTDATACHANNELPROXY_H
#define FM_IMC_PROJECT_INPUTDATACHANNELPROXY_H

#include "iremote_proxy.h"
#include "i_input_data_channel.h"

namespace OHOS {
namespace MiscServices {
    class InputDataChannelProxy : public IRemoteProxy<IInputDataChannel> {
    public:
        explicit InputDataChannelProxy(const sptr<IRemoteObject> &object);
        ~InputDataChannelProxy() = default;
        DISALLOW_COPY_AND_MOVE(InputDataChannelProxy);

        bool InsertText(const std::u16string& text) override;
        bool DeleteBackward(int32_t length) override;
        void Close() override;

    private:
        static inline BrokerDelegator<InputDataChannelProxy> delegator_;
    };
}
}
#endif