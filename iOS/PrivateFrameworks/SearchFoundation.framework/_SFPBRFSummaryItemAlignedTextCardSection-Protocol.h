//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, _SFPBRFTextProperty, _SFPBRFVisualProperty;

@protocol _SFPBRFSummaryItemAlignedTextCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBRFVisualProperty *thumbnail;
@property(copy, nonatomic) NSArray *text_6s;
@property(retain, nonatomic) _SFPBRFTextProperty *text_5;
@property(retain, nonatomic) _SFPBRFTextProperty *text_4;
@property(copy, nonatomic) NSArray *text_3s;
@property(retain, nonatomic) _SFPBRFTextProperty *text_2;
@property(retain, nonatomic) _SFPBRFTextProperty *text_1;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBRFTextProperty *)text_6AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_6Count;
- (void)addText_6:(_SFPBRFTextProperty *)arg1;
- (void)clearText_6;
- (_SFPBRFTextProperty *)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (void)addText_3:(_SFPBRFTextProperty *)arg1;
- (void)clearText_3;
@end

