//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FigMetadataItemCaptureConnectionConfiguration
{
    struct opaqueCMFormatDescription *_formatDescription;
    struct OpaqueCMClock *_clock;
    int _sourceSubType;
}

@property(nonatomic) int sourceSubType; // @synthesize sourceSubType=_sourceSubType;
@property(retain, nonatomic) struct OpaqueCMClock *clock; // @synthesize clock=_clock;
@property(retain, nonatomic) struct opaqueCMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

