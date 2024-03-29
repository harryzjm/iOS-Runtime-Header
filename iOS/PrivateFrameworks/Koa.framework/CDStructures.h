//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Alias {
    struct shared_ptr<skit::internal::AliasImpl> pimpl;
};

struct AliasImpl;

struct Allocator;

struct Analyzer;

struct ContextImpl;

struct ContextV2 {
    struct shared_ptr<skit::internal::ContextImpl> pimpl;
};

struct Dataset {
    unsigned char _field1[1];
};

struct FlatBufferBuilder {
    struct vector_downward buf_;
    unsigned int num_field_loc;
    unsigned short max_voffset_;
    _Bool nested;
    _Bool finished;
    unsigned long long minalign_;
    _Bool force_defaults_;
    _Bool dedup_vtables_;
    void *string_pool;
};

struct IndexReader {
    struct shared_ptr<skit::internal::IndexReaderImpl> pimpl;
};

struct IndexReaderImpl;

struct IndexWriter {
    struct unique_ptr<skit::internal::IndexWriterImpl, std::default_delete<skit::internal::IndexWriterImpl>> pimpl;
};

struct IndexWriterImpl;

struct Indexer {
    struct ContextV2 context;
    struct IndexWriter index_writer;
    unsigned char index_locale;
    struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> index_locale_id;
    struct shared_ptr<skitbridge::Tokenizer> tokenizer;
    struct shared_ptr<skitbridge::Analyzer> analyzer;
    struct Alias alias;
    unsigned char trial_factors;
};

struct Profile {
    unsigned char _field1[1];
};

struct Searcher {
    struct ContextV2 context;
    struct IndexReader index_reader;
    struct Alias alias;
    unsigned char trial_factors;
};

struct Tokenizer;

struct __raw {
    unsigned long long __words[3];
};

struct __shared_weak_count;

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    char *__data_;
                    unsigned long long __size_;
                    unsigned int __cap_:63;
                    unsigned int __is_long_:1;
                } __l;
                struct __short {
                    char __data_[23];
                    unsigned char __padding_[0];
                    unsigned int __size_:7;
                    unsigned int __is_long_:1;
                } __s;
                struct __raw __r;
            } ;
        } __value_;
    } __r_;
};

struct basic_string<char16_t, std::char_traits<char16_t>, std::allocator<char16_t>> {
    struct __compressed_pair<std::basic_string<char16_t>::__rep, std::allocator<char16_t>> {
        struct __rep {
            union {
                struct __long {
                    unsigned short *__data_;
                    unsigned long long __size_;
                    unsigned int __cap_:63;
                    unsigned int __is_long_:1;
                } __l;
                struct __short {
                    unsigned short __data_[11];
                    unsigned char __padding_[1];
                    unsigned int __size_:7;
                    unsigned int __is_long_:1;
                } __s;
                struct __raw __r;
            } ;
        } __value_;
    } __r_;
};

struct path {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> __pn_;
};

struct shared_ptr<skit::internal::AliasImpl> {
    struct AliasImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<skit::internal::ContextImpl> {
    struct ContextImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<skit::internal::IndexReaderImpl> {
    struct IndexReaderImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<skitbridge::Analyzer> {
    struct Analyzer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<skitbridge::Searcher> {
    struct Searcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<skitbridge::Tokenizer> {
    struct Tokenizer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<skit::internal::IndexWriterImpl, std::default_delete<skit::internal::IndexWriterImpl>> {
    struct __compressed_pair<skit::internal::IndexWriterImpl *, std::default_delete<skit::internal::IndexWriterImpl>> {
        struct IndexWriterImpl *__value_;
    } __ptr_;
};

struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>*, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::Dataset>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>*, std::allocator<apple::aiml::flatbuffers2::Offset<koa::vocabulary::NestedItem>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>*, std::allocator<std::pair<skitbridge::SearchGroup, std::vector<std::byte>>>> {
        void *__value_;
    } __end_cap_;
};

struct vector_downward {
    struct Allocator *allocator_;
    _Bool own_allocator_;
    unsigned long long initial_size_;
    unsigned long long buffer_minalign_;
    unsigned long long reserved_;
    char *buf_;
    char *cur_;
    char *scratch_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct shared_ptr<skitbridge::Searcher> {
    struct Searcher *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_78177662;

