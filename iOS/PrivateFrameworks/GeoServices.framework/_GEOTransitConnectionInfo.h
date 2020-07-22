//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitConnectionInfo-Protocol.h>

@class GEOPDTransitConnection, NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo>
{
    GEOPDTransitConnection *_connection;
    int _providerID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *urlToOpen;
@property(readonly, nonatomic) int providerID;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long muid;
- (id)initWithConnection:(id)arg1 providerID:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

