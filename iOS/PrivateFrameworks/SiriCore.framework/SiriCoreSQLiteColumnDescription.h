//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SiriCoreSQLiteColumnDescription : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_type;
    NSArray *_constraints;
}

+ (id)uniqueTextColumnWithName:(id)arg1;
+ (id)integerPrimaryKeyColumnWithName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 constraintsProvider:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 type:(id)arg2 constraints:(id)arg3;

@end
