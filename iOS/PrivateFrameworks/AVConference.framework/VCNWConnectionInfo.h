//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, VCNetworkAddress;
@protocol OS_nw_connection, OS_nw_parameters;

__attribute__((visibility("hidden")))
@interface VCNWConnectionInfo
{
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_parameters> *_parameters;
    NSString *_connectionID;
    VCNetworkAddress *_remoteAddress;
}

@property(copy, nonatomic) NSString *connectionID; // @synthesize connectionID=_connectionID;
@property(retain, nonatomic) NSObject<OS_nw_connection> *connection; // @synthesize connection=_connection;
- (void)dealloc;
- (_Bool)isSameRemoteAddress:(id)arg1;
- (id)newParametersFromConnection;
- (id)newRemoteAddressFromConnection;
@property(retain, nonatomic) NSObject<OS_nw_parameters> *parameters;
@property(copy, nonatomic) VCNetworkAddress *remoteAddress;

@end

