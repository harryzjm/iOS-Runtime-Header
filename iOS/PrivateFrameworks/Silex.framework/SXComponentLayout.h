//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SXEdgeSpacing;

@interface SXComponentLayout
{
}

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
- (unsigned long long)horizontalContentAlignmentWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)sideForValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)ignoreDocumentGutterWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)ignoreDocumentMarginWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) struct _NSRange columnRange; // @dynamic columnRange;
@property(readonly, nonatomic) struct _SXComponentContentInset contentInset; // @dynamic contentInset;
@property(readonly, nonatomic) unsigned long long horizontalContentAlignment; // @dynamic horizontalContentAlignment;
@property(readonly, nonatomic) unsigned long long ignoreDocumentGutter; // @dynamic ignoreDocumentGutter;
@property(readonly, nonatomic) unsigned long long ignoreDocumentMargin; // @dynamic ignoreDocumentMargin;
@property(readonly, nonatomic) id <SXEdgeSpacing> margin; // @dynamic margin;
@property(readonly, nonatomic) struct _SXConvertibleValue maximumContentWidth; // @dynamic maximumContentWidth;
@property(readonly, nonatomic) struct _SXConvertibleValue minimumHeight; // @dynamic minimumHeight;

@end

