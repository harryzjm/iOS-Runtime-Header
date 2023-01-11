//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>

@class NSString;

@interface CLSilo : NSObject <NSCopying>
{
    NSString *_identifier;
}

+ (id)globalConfiguration;
+ (void)setGlobalConfiguration:(id)arg1;
+ (id)main;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)async:(CDUnknownBlockType)arg1;
- (id)newTimer;
- (void)assertOutside;
- (void)assertInside;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

