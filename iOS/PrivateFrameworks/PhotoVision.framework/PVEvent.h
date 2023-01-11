//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PVEvent : NSObject
{
    NSString *_name;
    id _details;
}

+ (id)eventWithName:(id)arg1 details:(id)arg2;
@property(readonly, nonatomic) id details; // @synthesize details=_details;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 details:(id)arg2;

@end

