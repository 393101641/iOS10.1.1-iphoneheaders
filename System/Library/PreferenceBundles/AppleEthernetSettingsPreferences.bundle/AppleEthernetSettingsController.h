/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AppleEthernetSettingsPreferences.bundle/AppleEthernetSettingsPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSMutableArray, PSSpecifier, AppleEthernetController, NSString;

@interface AppleEthernetSettingsController : PSListController {

	NSArray* _segmentGroupSpecifiers;
	NSArray* _configGroupSpecifiers;
	NSArray* _renewGroupSpecifiers;
	NSArray* _renewClientGroupSpecifiers;
	NSArray* _activeServiceGroupSpecifiers;
	NSArray* _ipv6GroupSpecifiers;
	NSMutableArray* _currentConfigSpecifiers;
	PSSpecifier* _ipAddressSpecifer;
	PSSpecifier* _subnetMaskSpecifer;
	PSSpecifier* _routerSpecifer;
	PSSpecifier* _DNSSpecifer;
	PSSpecifier* _searchDomainSpecifier;
	PSSpecifier* _clientIDSpecifier;
	PSSpecifier* _searchDomainGroupSpecifier;
	BOOL _ignoreNetworkNotifications;
	int _setupMode;
	int _oldSetupMode;
	AppleEthernetController* _networkingController;
	NSString* _bsdName;

}
-(void)resetNetworkSettings;
-(void)setNetworkConfigValue:(id)arg1 forKey:(id)arg2 ;
-(id)networkConfigValueForKey:(id)arg1 ;
-(void)updateUIForConfigType:(unsigned)arg1 ;
-(void)activateService:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)marginForTableView:(id)arg1 ;
-(id)configType:(id)arg1 ;
-(void)settingsChanged:(id)arg1 ;
-(void)renewDHCPLease:(id)arg1 ;
-(void)setConfigType:(id)arg1 specifier:(id)arg2 ;
-(void)setIPAddress:(id)arg1 specifier:(id)arg2 ;
-(id)IPAddress:(id)arg1 ;
-(void)setSubnetMask:(id)arg1 specifier:(id)arg2 ;
-(id)subnetMask:(id)arg1 ;
-(void)setRouter:(id)arg1 specifier:(id)arg2 ;
-(id)router:(id)arg1 ;
-(void)setDNSServers:(id)arg1 specifier:(id)arg2 ;
-(id)DNSServers:(id)arg1 ;
-(void)setSearchDomains:(id)arg1 specifier:(id)arg2 ;
-(id)searchDomains:(id)arg1 ;
-(void)setDHCPClientID:(id)arg1 specifier:(id)arg2 ;
-(id)DHCPClientID:(id)arg1 ;
-(id)IPv6Router:(id)arg1 ;
-(id)IPv6Address:(id)arg1 ;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
@end
