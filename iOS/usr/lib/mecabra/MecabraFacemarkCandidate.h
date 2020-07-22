//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MecabraFacemarkCandidate : NSObject
{
    NSString *_string;
    NSString *_category;
}

+ (id)copyFacemarkCandidatesForLanguage:(int)arg1;
+ (id)copyFacemarkCandidatesForLocale:(id)arg1;
+ (id)candidateWithString:(id)arg1 category:(id)arg2;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void)dealloc;
- (id)description;
- (id)surface;
- (id)initWithString:(id)arg1 category:(id)arg2;

@end
