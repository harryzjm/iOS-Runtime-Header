//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSString;

@interface ABAccountScorer : NSObject
{
    int _sourceID;
    int _defaultSourceID;
    double _score;
    NSString *_accountType;
    void *_addressBook;
    ACAccountStore *_accountStore;
    void *_account;
}

- (void).cxx_destruct;
@property(nonatomic) int defaultSourceID; // @synthesize defaultSourceID=_defaultSourceID;
@property(nonatomic) void *account; // @synthesize account=_account;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
@property(nonatomic) int sourceID; // @synthesize sourceID=_sourceID;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(nonatomic) double score; // @synthesize score=_score;
- (int)_findBestSourceID;
- (void)calculateScore;
@property(readonly, nonatomic) NSString *accountDisambiguationDescription;
@property(readonly, nonatomic) NSString *accountTypeDescription;
- (void)dealloc;
- (id)initWithAddressBook:(void *)arg1 accountStore:(id)arg2 account:(void *)arg3 defaultSourceID:(int)arg4;

@end
