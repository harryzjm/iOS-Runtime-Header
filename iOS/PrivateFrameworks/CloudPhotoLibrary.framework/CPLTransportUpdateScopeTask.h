//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CPLEngineTransportDeleteTransportScopeTask, CPLEngineTransportUpdateTransportScopeTask;

@interface CPLTransportUpdateScopeTask
{
    id <CPLEngineTransportDeleteTransportScopeTask> _deleteTask;
    id <CPLEngineTransportUpdateTransportScopeTask> _updateTask;
}

- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)launch;
- (_Bool)checkScopeIsValidInTransaction:(id)arg1;

@end
