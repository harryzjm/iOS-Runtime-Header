//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ARODTResult : NSObject
{
    unsigned long long _detectedObjectID;
    void *_imageContext;
    CDStruct_14d5dc5e _visionTransform;
}

@property(nonatomic) void *imageContext; // @synthesize imageContext=_imageContext;
@property(nonatomic) CDStruct_14d5dc5e visionTransform; // @synthesize visionTransform=_visionTransform;
@property(nonatomic) unsigned long long detectedObjectID; // @synthesize detectedObjectID=_detectedObjectID;

@end
