//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface AMDAppSegmentInfo : NSObject
{
    NSString *_appIdentifier;
    NSSet *_segments;
}

- (void).cxx_destruct;
@property(retain) NSSet *segments; // @synthesize segments=_segments;
@property(retain) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (_Bool)isEqualToApp:(id)arg1;
- (id)initWithAppIdentifier:(id)arg1 andSegments:(id)arg2;

@end
