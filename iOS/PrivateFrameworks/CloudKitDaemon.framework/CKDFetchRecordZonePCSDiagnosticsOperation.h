//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKPCSDiagnosticInformation, NSArray, NSDictionary, NSString;

@interface CKDFetchRecordZonePCSDiagnosticsOperation
{
    CKPCSDiagnosticInformation *_pcsDiagnosticInfo;
    NSString *_identityStatus;
    NSDictionary *_invalidPCSByZoneID;
    NSDictionary *_validPCSByZoneID;
    NSArray *_recordZoneIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(retain, nonatomic) NSDictionary *validPCSByZoneID; // @synthesize validPCSByZoneID=_validPCSByZoneID;
@property(retain, nonatomic) NSDictionary *invalidPCSByZoneID; // @synthesize invalidPCSByZoneID=_invalidPCSByZoneID;
@property(retain, nonatomic) NSString *identityStatus; // @synthesize identityStatus=_identityStatus;
@property(retain, nonatomic) CKPCSDiagnosticInformation *pcsDiagnosticInfo; // @synthesize pcsDiagnosticInfo=_pcsDiagnosticInfo;
- (void)main;
- (int)operationType;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (id)activityCreate;
- (id)relevantZoneIDs;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

@end

