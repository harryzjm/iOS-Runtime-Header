//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CNContactPropertyModelDelegate, CNContactPropertyRemoteModelDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPropertyModel : NSObject
{
    id _source;
    NSArray *_properties;
    NSMutableArray *_validProperties;
    id <CNContactPropertyModelDelegate> _delegate;
    id <CNContactPropertyRemoteModelDelegate> _remoteDelegate;
    NSMutableDictionary *_model;
    NSMutableArray *_transactions;
}

@property(retain, nonatomic) NSMutableArray *transactions; // @synthesize transactions=_transactions;
@property(retain, nonatomic) NSMutableDictionary *model; // @synthesize model=_model;
@property(retain, nonatomic) id <CNContactPropertyRemoteModelDelegate> remoteDelegate; // @synthesize remoteDelegate=_remoteDelegate;
@property(retain, nonatomic) id <CNContactPropertyModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *validProperties; // @synthesize validProperties=_validProperties;
@property(retain, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) id source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)reloadModelFromSource;
- (void)noteTransactionsUpdated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setUpdatedTransactions:(id)arg1;
- (id)resolvePendingTransactions;
- (id)propertyForIndexPath:(id)arg1;
- (long long)rowCountForSection:(long long)arg1;
- (long long)sectionForProperty:(id)arg1;
- (long long)sectionCount;

@end

