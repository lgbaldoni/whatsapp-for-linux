#pragma once

#include <glibmm/keyfile.h>


class Settings
{
    public:
        static Settings& instance();

    public:
        Settings(Settings const&) = delete;
        Settings& operator=(Settings const&) = delete;

    public:
        void setAllowPermissions(bool allow);
        bool allowPermissions() const;

    private:
        Settings();
        ~Settings();

    private:
        Glib::KeyFile keyFile;
};
