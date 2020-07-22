//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Arena;

struct ArenaStringPtr {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
};

struct FeatureDescription {
    CDUnknownFunctionPointerType *_field1;
    struct ArenaStringPtr _field2;
    struct Arena *_field3;
    struct ArenaStringPtr _field4;
    struct ArenaStringPtr _field5;
    struct FeatureType *_field6;
    int _field7;
};

struct FeatureType;

struct IArchive {
    struct shared_ptr<Archiver::_IArchiveImpl> _field1;
    struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive>>> _field2;
};

struct MMappedFile;

struct Metadata;

struct Model;

struct ModelDescription;

struct MultiArrayBuffer {
    CDUnknownFunctionPointerType *_field1;
    struct shared_ptr<unsigned char> _field2;
    vector_eb9481f9 _field3;
    vector_eb9481f9 _field4;
    int _field5;
    unsigned long long _field6;
    unsigned short _field7;
};

struct OArchive {
    _Bool _field1;
    struct shared_ptr<Archiver::_OArchiveImpl> _field2;
    struct map<std::__1::basic_string<char>, OArchive, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, OArchive>>> _field3;
};

struct Rep;

struct RepeatedPtrField<CoreML::Specification::FeatureDescription> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<CoreML::Specification::Model> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct TreeEnsembleClassifier {
    CDUnknownFunctionPointerType *_field1;
    struct shared_ptr<CoreML::Specification::Model> _field2;
    struct map<std::__1::pair<unsigned long, unsigned long>, int, std::__1::less<std::__1::pair<unsigned long, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<unsigned long, unsigned long>, int>>> _field3;
    struct TreeEnsembleParameters *_field4;
    struct TreeEnsembleClassifier *_field5;
};

struct TreeEnsembleParameters;

struct _IArchiveImpl;

struct _MLModelDescriptionSpecification {
    struct shared_ptr<CoreML::Specification::ModelDescription> _field1;
};

struct _MLModelInputArchiver {
    struct IArchive _field1;
};

struct _MLModelMetadataSpecification {
    struct shared_ptr<CoreML::Specification::Metadata> _field1;
};

struct _MLModelOutputArchiver {
    struct OArchive _field1;
};

struct _MLModelSpecification {
    struct shared_ptr<CoreML::Specification::Model> _field1;
};

struct _OArchiveImpl;

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, OArchive, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, OArchive>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, OArchive>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, OArchive>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, OArchive>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, bool, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, bool>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, bool>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, bool>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, bool>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, bool>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, bool>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::pair<unsigned long, unsigned long>, int, std::__1::less<std::__1::pair<unsigned long, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<unsigned long, unsigned long>, int>>> {
    struct __tree<std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, std::__1::__map_value_compare<std::__1::pair<unsigned long, unsigned long>, std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, std::__1::less<std::__1::pair<unsigned long, unsigned long>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<unsigned long, unsigned long>, std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, std::__1::less<std::__1::pair<unsigned long, unsigned long>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct pair<unsigned long, unsigned long>;

struct shared_ptr<Archiver::MMappedFile> {
    struct MMappedFile *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Archiver::_IArchiveImpl> {
    struct _IArchiveImpl *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Archiver::_OArchiveImpl> {
    struct _OArchiveImpl *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<CoreML::Specification::Metadata> {
    struct Metadata *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<CoreML::Specification::Model> {
    struct Model *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<CoreML::Specification::ModelDescription> {
    struct ModelDescription *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<unsigned char> {
    char *_field1;
    struct __shared_weak_count *_field2;
};

struct svm_model {
    struct svm_parameter _field1;
    int _field2;
    int _field3;
    struct svm_node **_field4;
    double **_field5;
    double *_field6;
    double *_field7;
    double *_field8;
    int *_field9;
    int *_field10;
    int *_field11;
    int _field12;
};

struct svm_node {
    int _field1;
    double _field2;
};

struct svm_parameter {
    int _field1;
    int _field2;
    int _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    int _field9;
    int *_field10;
    double *_field11;
    double _field12;
    double _field13;
    int _field14;
    int _field15;
};

struct vector<const char *, std::__1::allocator<const char *>> {
    char **__begin_;
    char **__end_;
    struct __compressed_pair<const char **, std::__1::allocator<const char *>> {
        char **__first_;
    } __end_cap_;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__first_;
    } __end_cap_;
};

struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__first_;
    } __end_cap_;
};

struct vector<long long, std::__1::allocator<long long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long long *, std::__1::allocator<long long>> {
        long long *__first_;
    } __end_cap_;
};

struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char>>> {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *__begin_;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *__end_;
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::allocator<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *__first_;
    } __end_cap_;
};

struct vector<std::__1::pair<unsigned long, unsigned long>, std::__1::allocator<std::__1::pair<unsigned long, unsigned long>>> {
    struct pair<unsigned long, unsigned long> *__begin_;
    struct pair<unsigned long, unsigned long> *__end_;
    struct __compressed_pair<std::__1::pair<unsigned long, unsigned long>*, std::__1::allocator<std::__1::pair<unsigned long, unsigned long>>> {
        struct pair<unsigned long, unsigned long> *__first_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<unsigned char>, std::__1::allocator<std::__1::shared_ptr<unsigned char>>> {
    struct shared_ptr<unsigned char> *_field1;
    struct shared_ptr<unsigned char> *_field2;
    struct __compressed_pair<std::__1::shared_ptr<unsigned char>*, std::__1::allocator<std::__1::shared_ptr<unsigned char>>> {
        struct shared_ptr<unsigned char> *_field1;
    } _field3;
};

struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
    struct vector<double, std::__1::allocator<double>> *__begin_;
    struct vector<double, std::__1::allocator<double>> *__end_;
    struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double>>*, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
        struct vector<double, std::__1::allocator<double>> *__first_;
    } __end_cap_;
};

struct vector<unsigned char, std::__1::allocator<unsigned char>> {
    char *__begin_;
    char *__end_;
    struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
        char *__first_;
    } __end_cap_;
};

struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *_field1;
    unsigned long long *_field2;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    void *_field1;
    void *_field2;
    unsigned long long _field3[4];
    unsigned long long _field4[4];
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    int _field15;
} CDStruct_cf098810;

typedef struct {
    void *plan;
    int network_index;
} CDStruct_2bc666a5;

// Template types
typedef struct RepeatedPtrField<CoreML::Specification::FeatureDescription> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
} RepeatedPtrField_6c6d963a;

typedef struct RepeatedPtrField<CoreML::Specification::Model> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
} RepeatedPtrField_f3160e5f;

typedef struct map<std::__1::basic_string<char>, bool, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, bool>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, bool>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, bool>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, bool>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, bool>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, bool>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
} map_cb83868e;

typedef struct map<std::__1::basic_string<char>, espresso_buffer_t *, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_buffer_t *>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_buffer_t *>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
} map_bb82c936;

typedef struct map<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, espresso_simple_image_preprocessing_params_t>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
} map_6a415e36;

typedef struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
} map_11ac7060;

typedef struct vector<const char *, std::__1::allocator<const char *>> {
    char **__begin_;
    char **__end_;
    struct __compressed_pair<const char **, std::__1::allocator<const char *>> {
        char **__first_;
    } __end_cap_;
} vector_1a1a2930;

typedef struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__first_;
    } __end_cap_;
} vector_e0f2bd7e;

typedef struct vector<std::__1::shared_ptr<unsigned char>, std::__1::allocator<std::__1::shared_ptr<unsigned char>>> {
    struct shared_ptr<unsigned char> *_field1;
    struct shared_ptr<unsigned char> *_field2;
    struct __compressed_pair<std::__1::shared_ptr<unsigned char>*, std::__1::allocator<std::__1::shared_ptr<unsigned char>>> {
        struct shared_ptr<unsigned char> *_field1;
    } _field3;
} vector_fd38efa8;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long>> {
    unsigned long long *_field1;
    unsigned long long *_field2;
    struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
        unsigned long long *_field1;
    } _field3;
} vector_eb9481f9;

