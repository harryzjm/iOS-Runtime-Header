//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFShowDialogEvent
{
    NSString *_key;
    NSString *_dialogType;
    NSString *_presentationStyle;
    NSString *_dismissalType;
    NSString *_automationType;
}

+ (Class)codableEventClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *automationType; // @synthesize automationType=_automationType;
@property(copy, nonatomic) NSString *dismissalType; // @synthesize dismissalType=_dismissalType;
@property(copy, nonatomic) NSString *presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) NSString *dialogType; // @synthesize dialogType=_dialogType;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@end
