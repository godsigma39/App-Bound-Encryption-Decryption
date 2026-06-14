// (c) Alexander 'xaitax' Hagenah
// Licensed under the MIT License. See LICENSE file in the project root for full license information.

#pragma once

#include <Windows.h>
#include <string>

namespace Core {

    class Console {
    public:
        explicit Console(bool verbose = false) : m_verbose(verbose) {}
        ~Console() {}

        void Info(const std::string& msg) const {}
        void Success(const std::string& msg) const {}
        void Error(const std::string& msg) const {}
        void Warn(const std::string& msg) const {}
        void Debug(const std::string& msg) const {}
        void BrowserHeader(const std::string& name, const std::string& version = "") const {}
        void NoAbeWarning(const std::string& msg) const {}
        void KeyDecrypted(const std::string& keyHex) const {}
        void AsterKeyDecrypted(const std::string& keyHex) const {}
        void ProfileHeader(const std::string& name) const {}
        void DataRow(const std::string& key, const std::string& value) const {}
        void ExtractionResult(const std::string& type, int count, int total = -1) const {}
        void Summary(int cookies, int passwords, int cards, int ibans, int tokens, int profiles, const std::string& outputPath) const {}
        void Banner() const {}

        bool IsVerbose() const { return m_verbose; }

    private:
        bool m_verbose;
    };

}
