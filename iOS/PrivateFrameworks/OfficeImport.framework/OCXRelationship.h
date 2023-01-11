//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCXRelationship : NSObject
{
    NSString *mIdString;
    NSString *mType;
    NSString *mTarget;
    _Bool mExternal;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *target; // @synthesize target=mTarget;
@property(readonly, nonatomic) NSString *type; // @synthesize type=mType;
@property(readonly, nonatomic) NSString *idString; // @synthesize idString=mIdString;
- (void)writeToStreamWriter:(id)arg1;
- (id)initWithId:(unsigned long long)arg1 type:(id)arg2 target:(id)arg3 external:(_Bool)arg4;

@end
