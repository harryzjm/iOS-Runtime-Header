//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPointSize-Protocol.h>

@class NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBPointSize : PBCodable <_SFPBPointSize, NSSecureCoding>
{
    _SFPBGraphicalFloat *_width;
    _SFPBGraphicalFloat *_height;
}

@property(retain, nonatomic) _SFPBGraphicalFloat *height; // @synthesize height=_height;
@property(retain, nonatomic) _SFPBGraphicalFloat *width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasHeight;
@property(readonly, nonatomic) _Bool hasWidth;
- (id)initWithCGSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

