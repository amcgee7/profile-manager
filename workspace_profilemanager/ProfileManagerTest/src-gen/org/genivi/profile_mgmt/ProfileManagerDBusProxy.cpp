/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.201311151436.
* Used org.franca.core 0.8.11.201401091023.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "ProfileManagerDBusProxy.h"

namespace org {
namespace genivi {
namespace profile_mgmt {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createProfileManagerDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection) {
    return std::make_shared<ProfileManagerDBusProxy>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection);
}

__attribute__((constructor)) void registerProfileManagerDBusProxy(void) {
    CommonAPI::DBus::DBusFactory::registerProxyFactoryMethod(ProfileManager::getInterfaceId(),
       &createProfileManagerDBusProxy);
}

ProfileManagerDBusProxy::ProfileManagerDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection):
        CommonAPI::DBus::DBusProxy(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyconnection)
,        detectedUserSelective_(*this, "detectedUser", "iit"),
        synchronizedUserSelective_(*this, "synchronizedUser", "iit"),
        stopSelective_(*this, "stop", "it")
    {
    }


ProfileManagerDBusProxy::DetectedUserSelectiveEvent& ProfileManagerDBusProxy::getDetectedUserSelectiveEvent() {
    return detectedUserSelective_;
}
ProfileManagerDBusProxy::SynchronizedUserSelectiveEvent& ProfileManagerDBusProxy::getSynchronizedUserSelectiveEvent() {
    return synchronizedUserSelective_;
}
ProfileManagerDBusProxy::StopSelectiveEvent& ProfileManagerDBusProxy::getStopSelectiveEvent() {
    return stopSelective_;
}

void ProfileManagerDBusProxy::registerMe(const std::string& appID, const int32_t& seatID, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, int32_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "registerMe",
        "si",
        appID, seatID, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> ProfileManagerDBusProxy::registerMeAsync(const std::string& appID, const int32_t& seatID, RegisterMeAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, int32_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "registerMe",
        "si",
        appID, seatID, 
        std::move(callback));
}
void ProfileManagerDBusProxy::unregisterMe(const std::string& consumerAddress, const std::string& appID, const int32_t& seatID, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string, int32_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "unregisterMe",
        "ssi",
        consumerAddress, appID, seatID, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> ProfileManagerDBusProxy::unregisterMeAsync(const std::string& consumerAddress, const std::string& appID, const int32_t& seatID, UnregisterMeAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string, int32_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "unregisterMe",
        "ssi",
        consumerAddress, appID, seatID, 
        std::move(callback));
}
void ProfileManagerDBusProxy::confirm(const uint64_t& sessionID, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<uint64_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "confirm",
        "t",
        sessionID, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> ProfileManagerDBusProxy::confirmAsync(const uint64_t& sessionID, ConfirmAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<uint64_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "confirm",
        "t",
        sessionID, 
        std::move(callback));
}
void ProfileManagerDBusProxy::stopped(const uint64_t& sessionID, CommonAPI::CallStatus& callStatus) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<uint64_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodWithReply(
        *this,
        "stopped",
        "t",
        sessionID, 
        callStatus
        );
}
std::future<CommonAPI::CallStatus> ProfileManagerDBusProxy::stoppedAsync(const uint64_t& sessionID, StoppedAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<uint64_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<> >::callMethodAsync(
        *this,
        "stopped",
        "t",
        sessionID, 
        std::move(callback));
}



void ProfileManagerDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
}

} // namespace profile_mgmt
} // namespace genivi
} // namespace org
