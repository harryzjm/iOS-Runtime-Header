//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>
#import <UIFoundation/NSTextElementProvider-Protocol.h>

@class NSArray, NSMutableArray, NSString, NSTextLayoutManager, NSTextRange;
@protocol NSTextContentManagerDelegate;

@interface NSTextContentManager : NSObject <NSTextElementProvider, NSSecureCoding>
{
    NSTextLayoutManager *_primaryTextLayoutManager;
    _Atomic unsigned long long _transactionStack;
    NSMutableArray *_editHistory;
    NSMutableArray *_textLayoutManagers;
    _Bool _synchronizesTextLayoutManagersAutomatically;
    _Bool _synchronizesToBackingStoreAutomatically;
    id <NSTextContentManagerDelegate> _delegate;
    unsigned long long _maximumNumberOfUncachedElements;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property _Bool synchronizesToBackingStoreAutomatically; // @synthesize synchronizesToBackingStoreAutomatically=_synchronizesToBackingStoreAutomatically;
@property _Bool synchronizesTextLayoutManagersAutomatically; // @synthesize synchronizesTextLayoutManagersAutomatically=_synchronizesTextLayoutManagersAutomatically;
@property unsigned long long maximumNumberOfUncachedElements; // @synthesize maximumNumberOfUncachedElements=_maximumNumberOfUncachedElements;
@property __weak id <NSTextContentManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isCountableDataSource;
- (long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)locationFromLocation:(id)arg1 offset:(long long)arg2;
- (_Bool)synchronizeToBackingStore:(CDUnknownBlockType)arg1;
- (void)replaceCharactersInRange:(id)arg1 withTextElements:(id)arg2;
- (id)enumerateTextElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSTextRange *documentRange;
- (void)recordEditActionInRange:(id)arg1 newTextRange:(id)arg2;
- (void)performEditingTransactionWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool hasEditingTransaction;
- (id)textElementsForRange:(id)arg1;
- (_Bool)synchronizeTextLayoutManagers:(CDUnknownBlockType)arg1;
@property NSTextLayoutManager *primaryTextLayoutManager; // @dynamic primaryTextLayoutManager;
- (void)removeTextLayoutManager:(id)arg1;
- (void)addTextLayoutManager:(id)arg1;
@property(readonly, copy) NSArray *textLayoutManagers; // @dynamic textLayoutManagers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_decrementTransactionStack;
- (void)_incrementTransactionStack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
