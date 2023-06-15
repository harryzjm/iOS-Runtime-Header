//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionCorrectionInfo : NSObject
{
    int _alternativeSelectionCount;
    int _characterModificationCount;
    int _characterInsertionCount;
    int _characterDeletionCount;
    int _characterSubstitutionCount;
    NSString *_correctedText;
    NSDictionary *_recognizedTextInfo;
    NSDictionary *_userEditedTextInfo;
    NSDictionary *_alternativesSelectedInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *alternativesSelectedInfo; // @synthesize alternativesSelectedInfo=_alternativesSelectedInfo;
@property(copy, nonatomic) NSDictionary *userEditedTextInfo; // @synthesize userEditedTextInfo=_userEditedTextInfo;
@property(copy, nonatomic) NSDictionary *recognizedTextInfo; // @synthesize recognizedTextInfo=_recognizedTextInfo;
@property(copy, nonatomic) NSString *correctedText; // @synthesize correctedText=_correctedText;
@property(nonatomic) int characterSubstitutionCount; // @synthesize characterSubstitutionCount=_characterSubstitutionCount;
@property(nonatomic) int characterDeletionCount; // @synthesize characterDeletionCount=_characterDeletionCount;
@property(nonatomic) int characterInsertionCount; // @synthesize characterInsertionCount=_characterInsertionCount;
@property(nonatomic) int characterModificationCount; // @synthesize characterModificationCount=_characterModificationCount;
@property(nonatomic) int alternativeSelectionCount; // @synthesize alternativeSelectionCount=_alternativeSelectionCount;

@end

