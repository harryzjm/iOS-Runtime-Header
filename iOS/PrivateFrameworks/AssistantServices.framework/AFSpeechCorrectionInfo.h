//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding>
{
    long long _alternativeSelectionCount;
    long long _characterModificationCount;
    long long _characterInsertionCount;
    long long _characterSubstitutionCount;
    long long _characterDeletionCount;
    NSString *_correctedText;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *correctedText; // @synthesize correctedText=_correctedText;
@property(nonatomic) long long characterDeletionCount; // @synthesize characterDeletionCount=_characterDeletionCount;
@property(nonatomic) long long characterSubstitutionCount; // @synthesize characterSubstitutionCount=_characterSubstitutionCount;
@property(nonatomic) long long characterInsertionCount; // @synthesize characterInsertionCount=_characterInsertionCount;
@property(nonatomic) long long characterModificationCount; // @synthesize characterModificationCount=_characterModificationCount;
@property(nonatomic) long long alternativeSelectionCount; // @synthesize alternativeSelectionCount=_alternativeSelectionCount;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
