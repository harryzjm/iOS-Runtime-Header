//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <InputContext/_ICLexiconManaging-Protocol.h>

@class NSMutableArray, NSMutableDictionary, _ICNamedEntityStore;
@protocol OS_dispatch_queue, _ICLexiconSourcing;

@interface _ICLexiconManager : NSObject <_ICLexiconManaging>
{
    NSObject<OS_dispatch_queue> *_lexiconManagerQueue;
    id <_ICLexiconSourcing> _lexiconSource;
    NSMutableDictionary *_contacts;
    NSMutableArray *_contactObservers;
    _ICNamedEntityStore *_namedEntityStore;
    int _contactChangeCount;
    int _contactLoadState;
    int _namedEntityLoadState;
}

+ (unsigned long long)countWords:(id)arg1;
@property int namedEntityLoadState; // @synthesize namedEntityLoadState=_namedEntityLoadState;
@property int contactLoadState; // @synthesize contactLoadState=_contactLoadState;
- (void).cxx_destruct;
- (int)debugEntityLoadState;
- (unsigned long long)getContactCount;
- (void)printLexiconToNSLog:(struct _LXLexicon *)arg1;
- (void)doLoadLexicon;
- (void)setContactHandlers:(id)arg1;
- (void)setNamedEntityHandlers:(id)arg1;
- (void)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (void)unloadLexicons;
- (id)loadLexicons:(CDUnknownBlockType)arg1;
- (void)changeNamedEntityLoadingState:(int)arg1;
- (void)changeContactLoadingState:(int)arg1;
- (id)stateName:(int)arg1;
- (id)initWithLexiconSource:(id)arg1;

@end

