//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _ICNAAccountReportToDevice : NSObject
{
    NSMutableDictionary *_countOfAccountsByType;
    NSMutableDictionary *_countOfNotesByType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *countOfNotesByType; // @synthesize countOfNotesByType=_countOfNotesByType;
@property(retain, nonatomic) NSMutableDictionary *countOfAccountsByType; // @synthesize countOfAccountsByType=_countOfAccountsByType;
- (id)accountTypeSummary;
- (void)reportAccountType:(long long)arg1 noteCount:(unsigned long long)arg2;
- (id)init;

@end

