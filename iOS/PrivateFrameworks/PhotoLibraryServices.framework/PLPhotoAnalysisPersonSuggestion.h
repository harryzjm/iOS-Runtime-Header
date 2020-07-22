//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPhotoAnalysisPersonSuggestion : NSObject
{
    _Bool _confirmed;
    long long _keyFaceClusterSequenceNumber;
    NSString *_keyFaceLocalIdentifier;
    NSString *_personLocalIdentifier;
    long long _personFaceCount;
}

@property(readonly, nonatomic) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(readonly, nonatomic) long long personFaceCount; // @synthesize personFaceCount=_personFaceCount;
@property(readonly, copy, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
@property(readonly, copy, nonatomic) NSString *keyFaceLocalIdentifier; // @synthesize keyFaceLocalIdentifier=_keyFaceLocalIdentifier;
@property(readonly, nonatomic) long long keyFaceClusterSequenceNumber; // @synthesize keyFaceClusterSequenceNumber=_keyFaceClusterSequenceNumber;
- (void).cxx_destruct;
- (id)description;
- (id)suggestionDictionaryRepresentation;
- (id)initWithSuggestionDictionary:(id)arg1;

@end

