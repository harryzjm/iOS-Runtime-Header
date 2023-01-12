//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisionKitCore/NSCopying-Protocol.h>
#import <VisionKitCore/VKFeedbackAssetsProvider-Protocol.h>

@class CIImage, CLLocation, NSArray, NSDate, NSString, NSURL, UIImage;

@interface VKImageAnalyzerRequest : NSObject <NSCopying, VKFeedbackAssetsProvider>
{
    _Bool _cancelled;
    int _requestID;
    unsigned int _cgimageOrientation;
    int _madRequestID;
    NSArray *_locales;
    NSArray *_barcodeSymbologies;
    unsigned long long _requestType;
    long long _imageOrientation;
    unsigned long long _analysisTypes;
    UIImage *_image;
    CIImage *_ciImage;
    struct CGImage *_cgImageRef;
    struct __CVBuffer *_pixelBuffer;
    NSURL *_URL;
    NSString *_localIdentifier;
    NSDate *_processDate;
    CLLocation *_location;
    NSURL *_imageURL;
    NSURL *_pageURL;
    unsigned long long _imageSource;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    NSArray *_defaultBarcodeSymbologies;
    double _screenScale;
    unsigned long long _queryID;
    struct CGSize _photosImageSize;
}

+ (_Bool)supportedOCRLocaleExists;
+ (unsigned long long)newQueryIDForParsec;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long queryID; // @synthesize queryID=_queryID;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(retain, nonatomic) NSArray *defaultBarcodeSymbologies; // @synthesize defaultBarcodeSymbologies=_defaultBarcodeSymbologies;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) unsigned long long imageSource; // @synthesize imageSource=_imageSource;
@property(copy, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSDate *processDate; // @synthesize processDate=_processDate;
@property(nonatomic) int madRequestID; // @synthesize madRequestID=_madRequestID;
@property(nonatomic) struct CGSize photosImageSize; // @synthesize photosImageSize=_photosImageSize;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(nonatomic) struct CGImage *cgImageRef; // @synthesize cgImageRef=_cgImageRef;
@property(retain, nonatomic) CIImage *ciImage; // @synthesize ciImage=_ciImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long analysisTypes; // @synthesize analysisTypes=_analysisTypes;
@property(nonatomic) unsigned int cgimageOrientation; // @synthesize cgimageOrientation=_cgimageOrientation;
@property(nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) NSArray *barcodeSymbologies; // @synthesize barcodeSymbologies=_barcodeSymbologies;
@property(retain, nonatomic) NSArray *locales; // @synthesize locales=_locales;
- (_Bool)saveAssetsToFeedbackAttachmentsFolder:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)imageSizeFromCGImageSource:(struct CGImageSource *)arg1;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)createVNRequestHandler;
- (struct __CVBuffer *)tempPixelBufferRef;
- (id)viImageType;
- (id)madRequests;
- (id)shortLoggingDescription;
@property(readonly, copy) NSString *description;
- (id)processedBarcodeSymbologies;
- (id)requestIDValue;
- (id)initWithView:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithImageURL:(id)arg1 requestType:(unsigned long long)arg2;
- (id)initWithLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2 pixelBuffer:(struct __CVBuffer *)arg3 orientation:(long long)arg4 requestType:(unsigned long long)arg5;
- (id)initWithLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2 cgImage:(struct CGImage *)arg3 orientation:(long long)arg4 requestType:(unsigned long long)arg5;
- (id)initWithLocalIdentifier:(id)arg1 photoLibraryURL:(id)arg2 imageSize:(struct CGSize)arg3 requestType:(unsigned long long)arg4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 orientation:(long long)arg2 requestType:(unsigned long long)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 orientation:(long long)arg2 requestType:(unsigned long long)arg3;
- (id)initWithCIImage:(id)arg1 orientation:(long long)arg2 requestType:(unsigned long long)arg3;
- (id)initWithImage:(id)arg1 orientation:(long long)arg2 requestType:(unsigned long long)arg3;
- (id)initWithImage:(id)arg1 requestType:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
