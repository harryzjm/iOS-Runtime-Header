//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface CIFeatureProviderImage : NSObject
{
    NSString *name;
    struct __CVBuffer *buffer;
}

@property(nonatomic) struct __CVBuffer *buffer; // @synthesize buffer;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithName:(id)arg1 buffer:(struct __CVBuffer *)arg2;

@end

