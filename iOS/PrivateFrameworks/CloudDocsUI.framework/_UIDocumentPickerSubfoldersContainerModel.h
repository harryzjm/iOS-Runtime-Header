//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSubfoldersContainerModel
{
    NSString *_containerID;
}

- (void).cxx_destruct;
- (id)scopes;
- (void)startMonitoringChanges;
- (struct _UIArrayController *)_createObserver;
- (id)displayTitle;
- (_Bool)shouldShowTopLevelContainers;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithPickableTypes:(id)arg1 container:(id)arg2;

@end

