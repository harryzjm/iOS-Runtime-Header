//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class CNAutocompleteSearchManager, NSNumber, NSString;

@interface CNAutocompleteSearchOperation : NSOperation
{
    CNAutocompleteSearchManager *_owner;
    NSNumber *_taskID;
    NSString *_text;
    NSString *_sendingAddress;
}

+ (id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3;
@property(readonly, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSNumber *taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) CNAutocompleteSearchManager *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long type;

@end
