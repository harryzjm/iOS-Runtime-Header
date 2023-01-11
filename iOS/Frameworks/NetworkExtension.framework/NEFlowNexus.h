//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEFlowDivertFileHandle, NSData, NSMutableSet, NSObject, NWRemoteConnectionDirector;
@protocol OS_dispatch_queue;

@interface NEFlowNexus
{
    _Bool _supportsBrowseRequests;
    unsigned int _flowDivertControlUnit;
    struct _NEFlowDirector *_flowDivertDirector;
    NEFlowDivertFileHandle *_flowDivertControl;
    NSObject<OS_dispatch_queue> *_flowDivertQueue;
    NSData *_flowDivertTokenHMACKey;
    NWRemoteConnectionDirector *_connectionDirector;
    NSMutableSet *_browseAssertions;
}

@property(retain) NSMutableSet *browseAssertions; // @synthesize browseAssertions=_browseAssertions;
@property(retain) NWRemoteConnectionDirector *connectionDirector; // @synthesize connectionDirector=_connectionDirector;
@property(retain) NSData *flowDivertTokenHMACKey; // @synthesize flowDivertTokenHMACKey=_flowDivertTokenHMACKey;
@property unsigned int flowDivertControlUnit; // @synthesize flowDivertControlUnit=_flowDivertControlUnit;
@property(retain) NSObject<OS_dispatch_queue> *flowDivertQueue; // @synthesize flowDivertQueue=_flowDivertQueue;
@property(retain) NEFlowDivertFileHandle *flowDivertControl; // @synthesize flowDivertControl=_flowDivertControl;
@property struct _NEFlowDirector *flowDivertDirector; // @synthesize flowDivertDirector=_flowDivertDirector;
@property(nonatomic) _Bool supportsBrowseRequests; // @synthesize supportsBrowseRequests=_supportsBrowseRequests;
- (void).cxx_destruct;
- (void)handleUnassertFromClient:(id)arg1;
- (void)handleAssertFromClient:(id)arg1;
- (_Bool)setDiscoveredEndpoints:(id)arg1 forClient:(id)arg2;
- (void)disconnectFlow:(id)arg1;
- (void)connectNewFlow:(id)arg1;
- (void)setRemoteConnectionDirector:(id)arg1;
- (_Bool)setupFlowDivertPolicies;
- (_Bool)setupFlowDivertDirector;
- (_Bool)installFlowDivertRules;
- (void)flowDivertNewFlow:(struct _NEFlow *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 delegate:(id)arg2;

@end

