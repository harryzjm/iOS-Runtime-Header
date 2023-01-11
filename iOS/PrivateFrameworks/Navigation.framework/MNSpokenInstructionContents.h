//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/MNInstructionContents-Protocol.h>

@class NSArray, NSString;
@protocol GEOServerFormattedString;

@interface MNSpokenInstructionContents <MNInstructionContents>
{
    CDStruct_61a83fd4 _options;
    _Bool _isSecondary;
    id <GEOServerFormattedString> _proceedInstructionFormat;
    id <GEOServerFormattedString> _continueInstructionFormat;
    id <GEOServerFormattedString> _initialInstructionFormat;
    id <GEOServerFormattedString> _prepareInstructionFormat;
    NSArray *_executionInstructionFormats;
}

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 options:(CDStruct_61a83fd4 *)arg4 isSecondary:(_Bool)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *executionInstructionFormats; // @synthesize executionInstructionFormats=_executionInstructionFormats;
@property(retain, nonatomic) id <GEOServerFormattedString> prepareInstructionFormat; // @synthesize prepareInstructionFormat=_prepareInstructionFormat;
@property(retain, nonatomic) id <GEOServerFormattedString> initialInstructionFormat; // @synthesize initialInstructionFormat=_initialInstructionFormat;
@property(retain, nonatomic) id <GEOServerFormattedString> continueInstructionFormat; // @synthesize continueInstructionFormat=_continueInstructionFormat;
@property(retain, nonatomic) id <GEOServerFormattedString> proceedInstructionFormat; // @synthesize proceedInstructionFormat=_proceedInstructionFormat;
@property(readonly, nonatomic) _Bool hasServerContent;
- (id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
- (id)_instructionsForFormats:(id)arg1 distance:(double)arg2;
- (id)instructionWithShorterAlternatives:(id *)arg1;
@property(nonatomic) long long context;
@property(readonly, nonatomic) int numSignsWanted;
- (id)description;
- (void)_populateFromStep:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *roadName;
@property(nonatomic) _Bool suppressFallback;
@property(nonatomic) _Bool suppressNames;

@end
