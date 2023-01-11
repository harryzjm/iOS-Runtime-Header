//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSDImageProvider, TSPObjectContext;

__attribute__((visibility("hidden")))
@interface TSDImageResamplingOperation : NSObject
{
    TSDImageProvider *mImageProvider;
    struct CGSize mDesiredSize;
    NSString *mDisplayName;
    TSPObjectContext *mObjectContext;
}

@property(retain, nonatomic) TSPObjectContext *objectContext; // @synthesize objectContext=mObjectContext;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=mDisplayName;
@property(nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;
@property(retain, nonatomic) TSDImageProvider *imageProvider; // @synthesize imageProvider=mImageProvider;
- (void).cxx_destruct;
- (id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2;
- (id)init;
- (id)initWithImageProvider:(id)arg1 desiredSize:(struct CGSize)arg2;

@end

