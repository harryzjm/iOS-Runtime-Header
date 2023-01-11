//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNGeminiChannel, CNGeminiResult;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupGeminiItem
{
    _Bool _allowsPickerAction;
    CNGeminiResult *_geminiResult;
    CNGeminiChannel *_bestChannel;
    long long _channelType;
}

@property(nonatomic) long long channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) CNGeminiChannel *bestChannel; // @synthesize bestChannel=_bestChannel;
@property _Bool allowsPickerAction; // @synthesize allowsPickerAction=_allowsPickerAction;
@property(retain) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isValidValue:(id)arg1;
- (_Bool)isEquivalentToItem:(id)arg1 whenEditing:(_Bool)arg2;
- (id)displayStringForValue:(id)arg1;
- (id)displayValue;
- (id)displayLabel;

@end
