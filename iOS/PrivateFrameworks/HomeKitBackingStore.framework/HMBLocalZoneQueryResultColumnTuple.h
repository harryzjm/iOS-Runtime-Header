//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBModelField, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneQueryResultColumnTuple : HMFObject
{
    int _offset;
    NSString *_name;
    HMBModelField *_modelField;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMBModelField *modelField; // @synthesize modelField=_modelField;
@property(readonly, nonatomic) int offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithName:(id)arg1 offset:(int)arg2 modelField:(id)arg3;

@end

