//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSearchContainerModel
{
    NSString *_queryString;
}

@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void).cxx_destruct;
- (void)_updateObserverForQuery;
- (void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3;
- (struct _UIArrayController *)_createObserver;
- (id)scopes;
- (void)startMonitoringChanges;
- (id)displayTitle;
- (_Bool)shouldShowTopLevelContainers;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithPickableTypes:(id)arg1 mode:(unsigned long long)arg2;

@end

