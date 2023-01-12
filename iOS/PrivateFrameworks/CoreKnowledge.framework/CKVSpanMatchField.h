//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>

@class CKVSpanInfo;

@interface CKVSpanMatchField : NSObject <NSCopying>
{
    unsigned char _fieldComponent;
    CKVSpanInfo *_spanInfo;
    long long _fieldType;
}

+ (id)labelMatchWithFieldType:(long long)arg1 spanInfo:(id)arg2;
+ (id)valueMatchWithFieldType:(long long)arg1 spanInfo:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned char fieldComponent; // @synthesize fieldComponent=_fieldComponent;
@property(readonly, nonatomic) long long fieldType; // @synthesize fieldType=_fieldType;
@property(readonly, nonatomic) CKVSpanInfo *spanInfo; // @synthesize spanInfo=_spanInfo;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToSpanMatchField:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSpanInfo:(id)arg1 fieldType:(long long)arg2 fieldComponent:(unsigned char)arg3;

@end
