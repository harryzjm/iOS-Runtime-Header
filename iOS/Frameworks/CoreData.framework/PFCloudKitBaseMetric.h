//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitBaseMetric : NSObject
{
    NSString *_containerIdentifier;
    NSString *_processName;
}

- (id)description;
@property(readonly, nonatomic) NSDictionary *payload;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithContainerIdentifier:(id)arg1;

@end

