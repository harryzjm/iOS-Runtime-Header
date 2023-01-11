//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class NSString;

@interface MAPropertyAccessTuple : NSObject <NSCopying>
{
    _Bool _isNode;
    unsigned short _domain;
    unsigned short _label;
    NSString *_propertyKey;
    Class _valueClass;
}

@property(nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;
@property(retain, nonatomic) NSString *propertyKey; // @synthesize propertyKey=_propertyKey;
@property(nonatomic) unsigned short label; // @synthesize label=_label;
@property(nonatomic) unsigned short domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool isNode; // @synthesize isNode=_isNode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDomain:(unsigned short)arg1 label:(unsigned short)arg2 isNode:(_Bool)arg3 propertyKey:(id)arg4 valueClass:(Class)arg5;

@end

