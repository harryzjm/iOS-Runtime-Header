//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSText/NSCopying-Protocol.h>

@interface TSWPTopicNumberHintLevelData : NSObject <NSCopying>
{
    _Bool _isTiered;
    unsigned long long _number;
    unsigned long long _labelType;
    unsigned long long _numberType;
}

@property(nonatomic) _Bool isTiered; // @synthesize isTiered=_isTiered;
@property(nonatomic) unsigned long long numberType; // @synthesize numberType=_numberType;
@property(nonatomic) unsigned long long labelType; // @synthesize labelType=_labelType;
@property(nonatomic) unsigned long long number; // @synthesize number=_number;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;

@end
