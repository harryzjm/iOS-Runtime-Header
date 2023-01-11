//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, TIWordEntry;

@interface TIWordEntryAligned : NSObject <NSSecureCoding>
{
    _Bool _isContinuousPathConversion;
    int _inSessionAlignmentConfidence;
    NSArray *_alignedKeyboardInputs;
    NSString *_expectedString;
    TIWordEntry *_originalWord;
    NSArray *_alignedTouches;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *alignedTouches; // @synthesize alignedTouches=_alignedTouches;
@property(nonatomic) int inSessionAlignmentConfidence; // @synthesize inSessionAlignmentConfidence=_inSessionAlignmentConfidence;
@property(nonatomic) _Bool isContinuousPathConversion; // @synthesize isContinuousPathConversion=_isContinuousPathConversion;
@property(retain, nonatomic) TIWordEntry *originalWord; // @synthesize originalWord=_originalWord;
@property(copy, nonatomic) NSString *expectedString; // @synthesize expectedString=_expectedString;
@property(retain, nonatomic) NSArray *alignedKeyboardInputs; // @synthesize alignedKeyboardInputs=_alignedKeyboardInputs;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
