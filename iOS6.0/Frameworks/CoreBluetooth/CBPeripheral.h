/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface CBPeripheral : NSObject
{
    id <CBPeripheralDelegate> _delegate;
    struct __CFUUID *_UUID;
    NSString *_name;
    NSNumber *_RSSI;
    BOOL _isConnected;
    NSArray *_services;
}

@property(retain) NSArray *services; // @synthesize services=_services;
@property BOOL isConnected; // @synthesize isConnected=_isConnected;
@property(retain) NSNumber *RSSI; // @synthesize RSSI=_RSSI;
@property(retain) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct __CFUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) id <CBPeripheralDelegate> delegate; // @synthesize delegate=_delegate;
- (void)writeValue:(id)arg1 forDescriptor:(id)arg2;
- (void)readValueForDescriptor:(id)arg1;
- (void)discoverDescriptorsForCharacteristic:(id)arg1;
- (void)setIndicateValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)setBroadcastValue:(BOOL)arg1 forCharacteristic:(id)arg2;
- (void)reliablyWriteValues:(id)arg1 forCharacteristics:(id)arg2;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(int)arg3;
- (void)readValueForCharacteristic:(id)arg1;
- (void)discoverCharacteristics:(id)arg1 forService:(id)arg2;
- (void)discoverIncludedServices:(id)arg1 forService:(id)arg2;
- (void)discoverServices:(id)arg1;
- (void)readRSSI;

@end

