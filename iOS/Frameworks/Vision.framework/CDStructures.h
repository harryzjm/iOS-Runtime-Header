//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BufferSize {
    unsigned long long width;
    unsigned long long height;
};

struct BufferSizeFormat {
    unsigned long long width;
    unsigned long long height;
    unsigned int format;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CVMLCanceller {
    CDUnknownFunctionPointerType *_field1;
    _Bool _field2;
    int _field3;
};

struct CamGazePredictor;

struct FaceClustering;

struct FaceFrontalizer;

struct FaceID3Model;

struct FaceIDModel;

struct FaceQualityPredictor;

struct FaceRegionMap;

struct FaceSegmenterDNN;

struct FaceprintAndAttributes;

struct FastRegistration_Signatures {
    float *piRow;
    unsigned long long nPiRow;
    struct Projections_meanStdTable piRowTable;
    float *piCol;
    unsigned long long nPiCol;
    struct Projections_meanStdTable piColTable;
    char *_memoryContainer;
};

struct ForestAlgoParams {
    float FAFrameRate;
    int parabolaLength;
    int minXDistanceFromLastPointOnParabola;
    int maxXDistanceFromLastPointOnParabola;
    int minYDistanceFromLastPointOnParabola;
    int maxYDistanceFromLastPointOnParabola;
    int maxFramesSkippedToContinueParabolaDetection;
    int minObjectSize;
};

struct GazeFollowPredictor;

struct ImageAnalyzer;

struct ImageAnalyzer_CustomClassifier;

struct ImageAnalyzer_PCA;

struct ImageClassfier_Graph;

struct ImageClassifierAbstract;

struct ImageClassifier_HierarchicalModel {
    struct ImageClassfier_Graph *_field1;
};

struct ImageDescriptorBufferAbstract;

struct ImageDescriptorBufferFloat32;

struct ImageDescriptorProcessorAbstract {
    CDUnknownFunctionPointerType *_field1;
};

struct ImageDescriptorProcessorHyperplaneLSH;

struct InternalParameters {
    int minRegionSizeX;
    int minRegionSizeY;
    float initialYDiffLimit;
    float startingMinDiffDeviation;
    float maxDistanceForSolution;
    int frameWidth;
    int frameHeight;
    float xScaleFactor;
    float yScaleFactor;
    int runningMinDiffDeviation;
    float maxFrameSkipScaleFactor;
    float majorAxisScaler;
    float minorAxisScalar;
    float contourSizeUpperBound;
    float contourSizeLowerBound;
    float maxRadiusToCompensate;
    float maxRadiusBasedDeviation;
    float xConsistencyDeviation;
    float rejectionScaler;
};

struct LKTCPU;

struct LandmarkAttributes;

struct LandmarkDetectorDNN;

struct MPClusteringTreeNode {
    id _field1;
    int _field2;
    float _field3;
    float _field4;
    int _field5;
    struct MPClusteringTreeNode *_field6;
    struct MPClusteringTreeNode *_field7;
    struct MPClusteringTreeNode *_field8;
    struct MPClusteringTreeNode *_field9;
};

struct ObjectDetector_DCNFaceDetector_v2;

struct ObjectTrackerAbstract;

struct ObjectTrackerOptions {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
    int _field3;
};

struct Options {
    _Bool _field1;
    unsigned long long _field2;
    id _field3;
    id _field4;
};

struct ParabolaSearchBuffer {
    int maxFramesSkippedForDetection;
    int minRegionSizeX;
    int minRegionSizeY;
    struct deque<std::vector<CGPointWithPts>, std::allocator<std::vector<CGPointWithPts>>> contourPointsQ;
};

struct PetprintGenerator;

struct Projections_meanStdTable {
    float *sumTable;
    float *sumSqTable;
};

struct ScreenGazePredictor;

struct ThresholdSet_t {
    float _field1;
    float _field2;
    float _field3;
};

struct TorsoprintGenerator;

struct _Geometry2D_point2D_ {
    float x;
    float y;
};

struct _Geometry2D_rect2D_ {
    struct _Geometry2D_point2D_ origin;
    struct _Geometry2D_size2D_ size;
};

struct _Geometry2D_size2D_ {
    float height;
    float width;
};

struct _LandmarkDetector_faceMeshParts_ {
    int _field1;
    int _field2;
    int _field3[23];
    int _field4;
    int _field5[23];
    int _field6;
    int _field7[23];
    int _field8;
    int _field9[23];
    int _field10;
    int _field11[23];
    int _field12;
    int _field13[23];
    int _field14;
    int _field15[23];
    int _field16;
    int _field17[23];
    int _field18;
    int _field19[23];
    int _field20;
    int _field21[23];
    int _field22;
    int _field23[23];
    int _field24;
    int _field25[23];
    int _field26;
    int _field27[23];
    int _field28;
    int _field29[23];
    int _field30;
    int _field31[23];
    int _field32;
    int _field33[23];
    int _field34;
    int _field35[23];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CCBigBox {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    struct __CCCharBox _field5[50];
};

struct __CCBox {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
};

struct __CCCharBox {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
};

struct __CCColorProfileContext {
    struct vImage_Buffer _field1;
    struct vImage_Buffer _field2;
    struct vImage_Buffer _field3;
    struct vImage_Buffer _field4;
    int _field5;
    int _field6;
    unsigned short _field7;
    unsigned short _field8;
};

struct __CCFilterSumDerivConfig {
    struct __CCRange _field1;
    struct __CCRange _field2;
    _Bool _field3;
    _Bool _field4;
    unsigned long long _field5;
    unsigned long long _field6;
};

struct __CCPulseWindowContext {
    struct __CCRange *_field1;
    unsigned short _field2;
    unsigned short _field3;
    short _field4;
    _Bool _field5;
};

struct __CCRange {
    unsigned short _field1;
    unsigned short _field2;
};

struct __CCSumDerivVectors {
    float *_field1;
    float *_field2;
    float *_field3;
    float *_field4;
    float *_field5;
    float _field6;
    float _field7;
    int _field8;
    int _field9;
};

struct __CVBuffer;

struct __rgbMinMaxFloat {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct __rgbMinMaxU8 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned char _field5;
    unsigned char _field6;
};

struct __rgbaColor {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __shared_weak_count;

struct __tree_end_node<std::__tree_node_base<void *>*> {
    void *__left_;
};

struct basic_string_view<char, std::char_traits<char>> {
    char *_field1;
    unsigned long long _field2;
};

struct deque<std::vector<CGPointWithPts>, std::allocator<std::vector<CGPointWithPts>>> {
    struct __split_buffer<std::vector<CGPointWithPts>*, std::allocator<std::vector<CGPointWithPts>*>> {
        void **__first_;
        void **__begin_;
        void **__end_;
        struct __compressed_pair<std::vector<CGPointWithPts>**, std::allocator<std::vector<CGPointWithPts>*>> {
            void **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<std::vector<CGPointWithPts>>> {
        unsigned long long __value_;
    } __size_;
};

struct map<int, InternalObservedParabola, std::less<int>, std::allocator<std::pair<const int, InternalObservedParabola>>> {
    struct __tree<std::__value_type<int, InternalObservedParabola>, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>>, std::allocator<std::__value_type<int, InternalObservedParabola>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<int, InternalObservedParabola>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, InternalObservedParabola>, std::less<int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<int, ObservedParabola, std::less<int>, std::allocator<std::pair<const int, ObservedParabola>>> {
    struct __tree<std::__value_type<int, ObservedParabola>, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>>, std::allocator<std::__value_type<int, ObservedParabola>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<int, ObservedParabola>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ObservedParabola>, std::less<int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct mapped_model_file {
    CDUnknownFunctionPointerType *_field1;
    unsigned long long _field2;
};

struct model_file_cache;

struct optional<std::tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>>> {
    union {
        char _field1;
        struct tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> _field2;
    } _field1;
    _Bool _field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<const std::vector<std::tuple<std::string, float, bool>>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<const vision::mod::FaceClustering> {
    struct FaceClustering *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::CamGazePredictor> {
    struct CamGazePredictor *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceClustering> {
    struct FaceClustering *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceFrontalizer> {
    struct FaceFrontalizer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceID3Model> {
    struct FaceID3Model *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceIDModel> {
    struct FaceIDModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceQualityPredictor> {
    struct FaceQualityPredictor *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceRegionMap> {
    struct FaceRegionMap *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceSegmenterDNN> {
    struct FaceSegmenterDNN *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::FaceprintAndAttributes> {
    struct FaceprintAndAttributes *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::GazeFollowPredictor> {
    struct GazeFollowPredictor *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageAnalyzer> {
    struct ImageAnalyzer *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> {
    struct ImageAnalyzer_CustomClassifier *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageClassifierAbstract> {
    struct ImageClassifierAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> {
    struct ImageClassifier_HierarchicalModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> {
    struct ImageDescriptorBufferAbstract *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> {
    struct ImageDescriptorBufferFloat32 *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> {
    struct ImageDescriptorProcessorAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::LandmarkAttributes> {
    struct LandmarkAttributes *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::LandmarkDetectorDNN> {
    struct LandmarkDetectorDNN *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector_v2> {
    struct ObjectDetector_DCNFaceDetector_v2 *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ObjectTrackerAbstract> {
    struct ObjectTrackerAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::PetprintGenerator> {
    struct PetprintGenerator *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::ScreenGazePredictor> {
    struct ScreenGazePredictor *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<vision::mod::TorsoprintGenerator> {
    struct TorsoprintGenerator *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct tuple<float, float, float> {
    struct __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> {
        float _field1;
        float _field2;
        float _field3;
    } _field1;
};

struct tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> {
    struct __tuple_impl<std::__tuple_indices<0, 1>, std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> {
        struct unordered_map<NSString *, __CVBuffer *, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, __CVBuffer *>>> _field1;
        struct unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> _field2;
    } _field1;
};

struct unique_ptr<SessionsHandler<VNVTPixelRotationSession>, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> {
    struct __compressed_pair<SessionsHandler<VNVTPixelRotationSession>*, std::default_delete<SessionsHandler<VNVTPixelRotationSession>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<SessionsHandler<VNVTPixelTransferSession>, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> {
    struct __compressed_pair<SessionsHandler<VNVTPixelTransferSession>*, std::default_delete<SessionsHandler<VNVTPixelTransferSession>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<apple::vision::OpticalFlow::LKTCPU, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> {
    struct __compressed_pair<apple::vision::OpticalFlow::LKTCPU *, std::default_delete<apple::vision::OpticalFlow::LKTCPU>> {
        struct LKTCPU *__value_;
    } __ptr_;
};

struct unique_ptr<cvml::util::model_file_cache, std::default_delete<cvml::util::model_file_cache>> {
    struct __compressed_pair<cvml::util::model_file_cache *, std::default_delete<cvml::util::model_file_cache>> {
        struct model_file_cache *__value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*>*>>> {
        void **_field1;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>> {
    struct __compressed_pair<vision::mod::ImageAnalyzer_PCA *, std::default_delete<vision::mod::ImageAnalyzer_PCA>> {
        struct ImageAnalyzer_PCA *__value_;
    } __ptr_;
};

struct unique_ptr<vision::mod::ImageDescriptorProcessorHyperplaneLSH, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH>> {
    struct __compressed_pair<vision::mod::ImageDescriptorProcessorHyperplaneLSH *, std::default_delete<vision::mod::ImageDescriptorProcessorHyperplaneLSH>> {
        struct ImageDescriptorProcessorHyperplaneLSH *__value_;
    } __ptr_;
};

struct unordered_map<NSString *, __CVBuffer *, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, __CVBuffer *>>> {
    struct __hash_table<std::__hash_value_type<NSString *, __CVBuffer *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, __CVBuffer *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*>*>>> _field1;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>*> {
                void *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::hash<NSString *>, std::equal_to<NSString *>>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::equal_to<NSString *>, std::hash<NSString *>>> {
            float _field1;
        } _field4;
    } _field1;
};

struct unordered_map<NSString *, apple::vision::BufferSize, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, apple::vision::BufferSize>>> {
    struct __hash_table<std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, apple::vision::BufferSize>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, apple::vision::BufferSize>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::hash<NSString *>, std::equal_to<NSString *>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, apple::vision::BufferSize>, std::equal_to<NSString *>, std::hash<NSString *>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<NSString *, espresso_buffer_t, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, espresso_buffer_t>>> {
    struct __hash_table<std::__hash_value_type<NSString *, espresso_buffer_t>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, espresso_buffer_t>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, espresso_buffer_t>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::hash<NSString *>, std::equal_to<NSString *>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, espresso_buffer_t>, std::equal_to<NSString *>, std::hash<NSString *>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<apple::vision::BufferSizeFormat, __CVPixelBufferPool *, std::hash<BufferSizeFormat>, std::equal_to<apple::vision::BufferSizeFormat>, std::allocator<std::pair<const apple::vision::BufferSizeFormat, __CVPixelBufferPool *>>> {
    struct __hash_table<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::__unordered_map_hasher<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::hash<BufferSizeFormat>, std::equal_to<apple::vision::BufferSizeFormat>>, std::__unordered_map_equal<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::equal_to<apple::vision::BufferSizeFormat>, std::hash<BufferSizeFormat>>, std::allocator<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::hash<BufferSizeFormat>, std::equal_to<apple::vision::BufferSizeFormat>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<apple::vision::BufferSizeFormat, std::__hash_value_type<apple::vision::BufferSizeFormat, __CVPixelBufferPool *>, std::equal_to<apple::vision::BufferSizeFormat>, std::hash<BufferSizeFormat>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vImage_Buffer {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

struct vector<MPClusteringTreeNode *, std::allocator<MPClusteringTreeNode *>> {
    struct MPClusteringTreeNode **_field1;
    struct MPClusteringTreeNode **_field2;
    struct __compressed_pair<MPClusteringTreeNode **, std::allocator<MPClusteringTreeNode *>> {
        struct MPClusteringTreeNode **_field1;
    } _field3;
};

struct vector<_Geometry2D_point2D_, std::allocator<_Geometry2D_point2D_>> {
    struct _Geometry2D_point2D_ *__begin_;
    struct _Geometry2D_point2D_ *__end_;
    struct __compressed_pair<_Geometry2D_point2D_ *, std::allocator<_Geometry2D_point2D_>> {
        struct _Geometry2D_point2D_ *__value_;
    } __end_cap_;
};

struct vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::shared_ptr<espresso_buffer_t>*, std::allocator<std::shared_ptr<espresso_buffer_t>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<std::tuple<simd_float3x3, float>, std::allocator<std::tuple<simd_float3x3, float>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::tuple<simd_float3x3, float>*, std::allocator<std::tuple<simd_float3x3, float>>> {
        void *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *columns[3];
} CDStruct_8e0628e6;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    void *data;
    void *reserved;
    unsigned long long dim[4];
    unsigned long long stride[4];
    unsigned long long width;
    unsigned long long height;
    unsigned long long channels;
    unsigned long long batch_number;
    unsigned long long sequence_length;
    unsigned long long stride_width;
    unsigned long long stride_height;
    unsigned long long stride_channels;
    unsigned long long stride_batch_number;
    unsigned long long stride_sequence_length;
    int storage_type;
} CDStruct_0a65202a;

typedef struct {
    void *plan;
    int network_index;
} CDStruct_2bc666a5;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    int _field1;
    int _field2;
    char *_field3;
} CDStruct_3553761d;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    unsigned long long _field1;
    CDStruct_1ef3fb1f _field2;
    CDStruct_1ef3fb1f _field3;
    CDStruct_1ef3fb1f _field4;
} CDStruct_7d93034e;

typedef struct {
    struct __CVBuffer *_field1;
    struct *_field2;
    struct __CVBuffer *_field3;
} CDStruct_a4900c83;

typedef struct {
    float _field1;
    float _field2;
    CDStruct_b2fbf00d _field3[9];
    CDStruct_b2fbf00d _field4[9];
} CDStruct_47a8b21a;

typedef struct {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
} CDStruct_5c5366e1;

// Template types
typedef struct basic_string_view<char, std::char_traits<char>> {
    char *_field1;
    unsigned long long _field2;
} basic_string_view_1993c9b6;

typedef struct optional<std::tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>>> {
    union {
        char _field1;
        struct tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> _field2;
    } _field1;
    _Bool _field2;
} optional_c07b8cc9;

typedef struct shared_ptr<const vision::mod::FaceClustering> {
    struct FaceClustering *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_8fc713d1;

typedef struct shared_ptr<vision::mod::FaceID3Model> {
    struct FaceID3Model *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_d8728072;

typedef struct shared_ptr<vision::mod::FaceIDModel> {
    struct FaceIDModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_8c39738b;

typedef struct shared_ptr<vision::mod::ImageClassifierAbstract> {
    struct ImageClassifierAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_047f28ed;

typedef struct shared_ptr<vision::mod::ImageClassifier_HierarchicalModel> {
    struct ImageClassifier_HierarchicalModel *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_eb20c8f2;

typedef struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> {
    struct ImageDescriptorBufferAbstract *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_0a6daad2;

typedef struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> {
    struct ImageDescriptorBufferFloat32 *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_099ccdd3;

typedef struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> {
    struct ImageDescriptorProcessorAbstract *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_b26ea6de;

typedef struct tuple<float, float, float> {
    struct __tuple_impl<std::__tuple_indices<0, 1, 2>, float, float, float> {
        float _field1;
        float _field2;
        float _field3;
    } _field1;
} tuple_8dc74180;

typedef struct vector<MPClusteringTreeNode *, std::allocator<MPClusteringTreeNode *>> {
    struct MPClusteringTreeNode **_field1;
    struct MPClusteringTreeNode **_field2;
    struct __compressed_pair<MPClusteringTreeNode **, std::allocator<MPClusteringTreeNode *>> {
        struct MPClusteringTreeNode **_field1;
    } _field3;
} vector_f43821d3;

