//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactStore, NSNumberFormatter, PRPersonaStore;
@protocol CNScheduler;

@interface CNUIPRPersonaStoreObservableProvider : NSObject
{
    NSNumberFormatter *_numberFormatter;
    PRPersonaStore *_personaStore;
    CNContactStore *_contactStore;
    id <CNScheduler> _scheduler;
}

+ (id)_normalizedStringForPhoneNumberString:(id)arg1;
@property(retain, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (void).cxx_destruct;
- (id)likenessObservableForContact:(id)arg1;
- (_Bool)isMeContact:(id)arg1;
- (id)likenessObservableForMe;
- (id)disambiguationObservableForLikenessObservables:(id)arg1;
- (id)observableForPhoneNumber:(id)arg1;
- (id)observableForEmail:(id)arg1;
- (id)likenessObservableForContactFuture:(id)arg1;
- (id)initWithPersonaStore:(id)arg1 contactStore:(id)arg2 scheduler:(id)arg3;

@end

