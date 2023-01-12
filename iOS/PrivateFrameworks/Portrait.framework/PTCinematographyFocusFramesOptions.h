//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Portrait/NSCopying-Protocol.h>

@interface PTCinematographyFocusFramesOptions : NSObject <NSCopying>
{
    float _maximumDisparityPerSecond;
    CDStruct_1b6d18a9 _minimumRackFocusPullTime;
    CDStruct_1b6d18a9 _maximumRackFocusPullTime;
}

+ (float)_defaultMaximumDisparityPerSecond;
+ (CDStruct_1b6d18a9)_defaultMaximumRackFocusPullTime;
+ (CDStruct_1b6d18a9)_defaultMinimumRackFocusPullTime;
@property(nonatomic) float maximumDisparityPerSecond; // @synthesize maximumDisparityPerSecond=_maximumDisparityPerSecond;
@property(nonatomic) CDStruct_1b6d18a9 maximumRackFocusPullTime; // @synthesize maximumRackFocusPullTime=_maximumRackFocusPullTime;
@property(nonatomic) CDStruct_1b6d18a9 minimumRackFocusPullTime; // @synthesize minimumRackFocusPullTime=_minimumRackFocusPullTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)writeToGlobalMetadata:(id)arg1;
- (id)initWithGlobalMetadata:(id)arg1;
- (id)init;

@end
