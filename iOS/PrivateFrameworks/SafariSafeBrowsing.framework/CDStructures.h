//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Connection;

struct Database;

struct DatabaseStatus {
    struct vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database>> m_databases;
};

struct DatabaseUpdaterStatus {
    int state;
    int provider;
};

struct LookupContext;

struct LookupResult {
    struct OptionSet<Backend::LookupResult::Type> type;
    int provider;
};

struct OptionSet<Backend::LookupResult::Type> {
    unsigned int m_storage;
};

struct SafeHashCache;

struct ServiceStatus {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> m_name;
    int m_pid;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> m_activeTransactions;
    struct vector<SafeBrowsing::ServiceStatus::Connection, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection>> m_connections;
    struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> m_databaseUpdatersStatuses;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __first_;
    } __r_;
};

struct shared_ptr<SafeBrowsing::LookupContext> {
    struct LookupContext *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<SafeBrowsing::SafeHashCache, std::__1::default_delete<SafeBrowsing::SafeHashCache>> {
    struct __compressed_pair<SafeBrowsing::SafeHashCache *, std::__1::default_delete<SafeBrowsing::SafeHashCache>> {
        struct SafeHashCache *__first_;
    } __ptr_;
};

struct vector<SafeBrowsing::DatabaseStatus::Database, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database>> {
    struct Database *__begin_;
    struct Database *__end_;
    struct __compressed_pair<SafeBrowsing::DatabaseStatus::Database *, std::__1::allocator<SafeBrowsing::DatabaseStatus::Database>> {
        struct Database *__first_;
    } __end_cap_;
};

struct vector<SafeBrowsing::ServiceStatus::Connection, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection>> {
    struct Connection *__begin_;
    struct Connection *__end_;
    struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::__1::allocator<SafeBrowsing::ServiceStatus::Connection>> {
        struct Connection *__first_;
    } __end_cap_;
};

struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> {
    struct DatabaseUpdaterStatus *__begin_;
    struct DatabaseUpdaterStatus *__end_;
    struct __compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::__1::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> {
        struct DatabaseUpdaterStatus *__first_;
    } __end_cap_;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *__begin_;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *__end_;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *__first_;
    } __end_cap_;
};

