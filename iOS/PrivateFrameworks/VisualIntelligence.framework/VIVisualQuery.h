//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualIntelligence/NSCopying-Protocol.h>

@class NSSet, VIAnnotation, VIImage, VIQueryContext;

@interface VIVisualQuery : NSObject <NSCopying>
{
    VIImage *_image;
    VIAnnotation *_annotation;
    NSSet *_domainsOfInterest;
    VIQueryContext *_queryContext;
    struct CGRect _normalizedRegionOfInterest;
}

+ (id)queryWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 normalizedRegionOfInterest:(struct CGRect)arg3 annotation:(id)arg4 queryContext:(id)arg5;
+ (id)queryWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 normalizedRegionOfInterest:(struct CGRect)arg3 textBlockAnnotation:(id)arg4 queryContext:(id)arg5;
+ (id)queryWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 normalizedRegionOfInterest:(struct CGRect)arg3;
+ (id)queryWithPixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) VIQueryContext *queryContext; // @synthesize queryContext=_queryContext;
@property(readonly, nonatomic) NSSet *domainsOfInterest; // @synthesize domainsOfInterest=_domainsOfInterest;
@property(readonly, nonatomic) struct CGRect normalizedRegionOfInterest; // @synthesize normalizedRegionOfInterest=_normalizedRegionOfInterest;
@property(readonly, nonatomic) VIAnnotation *annotation; // @synthesize annotation=_annotation;
@property(readonly, nonatomic) VIImage *image; // @synthesize image=_image;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImage:(id)arg1 annotation:(id)arg2 normalizedRegionOfInterest:(struct CGRect)arg3 domainsOfInterest:(id)arg4 queryContext:(id)arg5;
- (id)initWithImage:(id)arg1 textBlockAnnotation:(id)arg2 normalizedRegionOfInterest:(struct CGRect)arg3 domainsOfInterest:(id)arg4 queryContext:(id)arg5;

@end
