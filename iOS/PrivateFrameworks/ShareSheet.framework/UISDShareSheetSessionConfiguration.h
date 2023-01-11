//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ShareSheet/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface UISDShareSheetSessionConfiguration : NSObject <NSSecureCoding>
{
    _Bool _wantsAnimation;
    NSNumber *_nearbyCountSlotID;
    NSArray *_peopleProxies;
    NSArray *_shareProxies;
    NSArray *_actionProxies;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) _Bool wantsAnimation; // @synthesize wantsAnimation=_wantsAnimation;
@property(retain, nonatomic) NSArray *actionProxies; // @synthesize actionProxies=_actionProxies;
@property(retain, nonatomic) NSArray *shareProxies; // @synthesize shareProxies=_shareProxies;
@property(retain, nonatomic) NSArray *peopleProxies; // @synthesize peopleProxies=_peopleProxies;
@property(retain, nonatomic) NSNumber *nearbyCountSlotID; // @synthesize nearbyCountSlotID=_nearbyCountSlotID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
